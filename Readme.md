stateDiagram-v2
    [*] --> Init : 起動
    Init --> Running : 初期化完了
    Running --> Stopped : 停止要求
    Running --> Terminating : 終了要求
    Terminating --> Stopped : 終了完了
    Stopped --> [*]