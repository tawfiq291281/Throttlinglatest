{
    bool adjustTimeStep =
        runTime.controlDict().lookupOrDefault("adjustTimeStep", false);

    scalar maxCo =
        runTime.controlDict().lookupOrDefault<scalar>("maxCo", 1.0);

    scalar maxDeltaT =
        runTime.controlDict().lookupOrDefault<scalar>("maxDeltaT", GREAT);

    // Suppress unused variable warnings
    Info<< "Time controls: adjustTimeStep = " << (adjustTimeStep ? "enabled" : "disabled")
        << ", maxCo = " << maxCo
        << ", maxDeltaT = " << maxDeltaT << endl;
}
