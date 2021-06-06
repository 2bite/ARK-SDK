#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_SecurityCamera_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.SetConsoleDataByID
struct UPrimalItemStructure_SecurityCamera_C_SetConsoleDataByID_Params
{
	float                                              ConsoleID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.SetCameraName
struct UPrimalItemStructure_SecurityCamera_C_SetCameraName_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
};

// Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.RetrieveConsoleData
struct UPrimalItemStructure_SecurityCamera_C_RetrieveConsoleData_Params
{
	float                                              outConsoleID;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               outAllowedToAdd;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      outCameraName;                                            // (Parm, OutParm, ZeroConstructor)
	class FString                                      outConsoleName;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.Set Console Data
struct UPrimalItemStructure_SecurityCamera_C_Set_Console_Data_Params
{
	class APrimalStructure*                            Console;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Changed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.GetConsoleFromID
struct UPrimalItemStructure_SecurityCamera_C_GetConsoleFromID_Params
{
	float                                              ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalStructure*                            LinkedConsole;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.BPServerVerifyStructurePlacementData
struct UPrimalItemStructure_SecurityCamera_C_BPServerVerifyStructurePlacementData_Params
{
};

// Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.VerifyConsoleData
struct UPrimalItemStructure_SecurityCamera_C_VerifyConsoleData_Params
{
};

// Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.BPGetItemName
struct UPrimalItemStructure_SecurityCamera_C_BPGetItemName_Params
{
	class FString*                                     ItemNameIn;                                               // (Parm, ZeroConstructor)
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.BPGetItemIcon
struct UPrimalItemStructure_SecurityCamera_C_BPGetItemIcon_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.BPGetItemDescription
struct UPrimalItemStructure_SecurityCamera_C_BPGetItemDescription_Params
{
	class FString*                                     InDescription;                                            // (Parm, ZeroConstructor)
	bool*                                              bGetLongDescription;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.ExecuteUbergraph_PrimalItemStructure_SecurityCamera
struct UPrimalItemStructure_SecurityCamera_C_ExecuteUbergraph_PrimalItemStructure_SecurityCamera_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
