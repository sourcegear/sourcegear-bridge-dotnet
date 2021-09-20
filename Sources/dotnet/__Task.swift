
// Copyright 2021 SourceGear

@available(macOS 12, *)
public func make_swift_task<T>(clrtask: dotnet.System.Threading.Tasks.Task_1<T>) async throws -> T
{
    try await withCheckedThrowingContinuation
        {
            continuation in

            do
            {
                let on_success = try dotnet.System.Action_1<dotnet.System.Threading.Tasks.Task_1<T>>
                    {
                        t in
                        continuation.resume(returning: t.Result);
                    };
                let _ = try clrtask.ContinueWith(
                    continuationAction: on_success, 
                    continuationOptions: dotnet.System.Threading.Tasks.TaskContinuationOptions.OnlyOnRanToCompletion
                    );
                let on_fail = try dotnet.System.Action_1<dotnet.System.Threading.Tasks.Task_1<T>>
                    {
                        t in
                        continuation.resume(throwing: t.Exception!);
                    };
                let _ = try clrtask.ContinueWith(
                    continuationAction: on_fail, 
                    continuationOptions: dotnet.System.Threading.Tasks.TaskContinuationOptions.OnlyOnFaulted
                    );
            }
            catch
            {
                continuation.resume(throwing: error);
            }
        };
}

