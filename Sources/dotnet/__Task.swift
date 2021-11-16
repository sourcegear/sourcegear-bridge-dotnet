
// Copyright 2021 SourceGear

@available(macOS 12, *)
extension dotnet.System.Threading.Tasks.Task_1
{
    public func ToAsync() async throws -> TResult
    {
        try await withCheckedThrowingContinuation
            {
                continuation in

                do
                {
                    let on_success = try dotnet.System.Action_1<dotnet.System.Threading.Tasks.Task_1<TResult>>
                        {
                            t in
                            continuation.resume(returning: t.Result);
                        };
                    let _ = try self.ContinueWith(
                        continuationAction: on_success, 
                        continuationOptions: dotnet.System.Threading.Tasks.TaskContinuationOptions.OnlyOnRanToCompletion
                        );
                    let on_fail = try dotnet.System.Action_1<dotnet.System.Threading.Tasks.Task_1<TResult>>
                        {
                            t in
                            continuation.resume(throwing: t.Exception!);
                        };
                    let _ = try self.ContinueWith(
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
}


@available(macOS 12, *)
extension dotnet.System.Threading.Tasks.Task
{
    public func ToAsync() async throws
    {
        let clos : (CheckedContinuation<Void, Error>) -> Void =
            {
                continuation in

                do
                {
                    let on_success = try dotnet.System.Action_1<dotnet.System.Threading.Tasks.Task>
                        {
                            t in
                            continuation.resume();
                        };
                    let _ = try self.ContinueWith(
                        continuationAction: on_success, 
                        continuationOptions: dotnet.System.Threading.Tasks.TaskContinuationOptions.OnlyOnRanToCompletion
                        );
                    let on_fail = try dotnet.System.Action_1<dotnet.System.Threading.Tasks.Task>
                        {
                            t in
                            continuation.resume(throwing: t.Exception!);
                        };
                    let _ = try self.ContinueWith(
                        continuationAction: on_fail, 
                        continuationOptions: dotnet.System.Threading.Tasks.TaskContinuationOptions.OnlyOnFaulted
                        );
                }
                catch
                {
                    continuation.resume(throwing: error);
                }
            };

        try await withCheckedThrowingContinuation(clos)
    }
}

