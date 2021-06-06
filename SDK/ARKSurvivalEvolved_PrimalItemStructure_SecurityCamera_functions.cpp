// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_SecurityCamera_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.SetConsoleDataByID
// ()
// Parameters:
// float                          ConsoleID                      (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_SecurityCamera_C::SetConsoleDataByID(float ConsoleID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.SetConsoleDataByID");

	UPrimalItemStructure_SecurityCamera_C_SetConsoleDataByID_Params params;
	params.ConsoleID = ConsoleID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.SetCameraName
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)

void UPrimalItemStructure_SecurityCamera_C::SetCameraName(const class FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.SetCameraName");

	UPrimalItemStructure_SecurityCamera_C_SetCameraName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.RetrieveConsoleData
// (Exec, Event, NetResponse, NetMulticast, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          outConsoleID                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           outAllowedToAdd                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  outCameraName                  (Parm, OutParm, ZeroConstructor)
// class FString                  outConsoleName                 (Parm, OutParm, ZeroConstructor)

void UPrimalItemStructure_SecurityCamera_C::RetrieveConsoleData(float* outConsoleID, struct FVector* OutLocation, bool* outAllowedToAdd, class FString* outCameraName, class FString* outConsoleName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.RetrieveConsoleData");

	UPrimalItemStructure_SecurityCamera_C_RetrieveConsoleData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outConsoleID != nullptr)
		*outConsoleID = params.outConsoleID;
	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (outAllowedToAdd != nullptr)
		*outAllowedToAdd = params.outAllowedToAdd;
	if (outCameraName != nullptr)
		*outCameraName = params.outCameraName;
	if (outConsoleName != nullptr)
		*outConsoleName = params.outConsoleName;
}


// Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.Set Console Data
// (NetReliable, Exec, Native, Static, NetMulticast, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrimalStructure*        Console                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Changed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_SecurityCamera_C::STATIC_Set_Console_Data(class APrimalStructure* Console, bool* Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.Set Console Data");

	UPrimalItemStructure_SecurityCamera_C_Set_Console_Data_Params params;
	params.Console = Console;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Changed != nullptr)
		*Changed = params.Changed;
}


// Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.GetConsoleFromID
// ()
// Parameters:
// float                          ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalStructure*        LinkedConsole                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_SecurityCamera_C::GetConsoleFromID(float ID, class APrimalStructure** LinkedConsole)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.GetConsoleFromID");

	UPrimalItemStructure_SecurityCamera_C_GetConsoleFromID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LinkedConsole != nullptr)
		*LinkedConsole = params.LinkedConsole;
}


// Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.BPServerVerifyStructurePlacementData
// ()

void UPrimalItemStructure_SecurityCamera_C::BPServerVerifyStructurePlacementData()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.BPServerVerifyStructurePlacementData");

	UPrimalItemStructure_SecurityCamera_C_BPServerVerifyStructurePlacementData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.VerifyConsoleData
// (Native, NetResponse, Static, NetMulticast, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UPrimalItemStructure_SecurityCamera_C::STATIC_VerifyConsoleData()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.VerifyConsoleData");

	UPrimalItemStructure_SecurityCamera_C_VerifyConsoleData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.BPGetItemName
// ()
// Parameters:
// class FString*                 ItemNameIn                     (Parm, ZeroConstructor)
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItemStructure_SecurityCamera_C::BPGetItemName(class FString* ItemNameIn, class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.BPGetItemName");

	UPrimalItemStructure_SecurityCamera_C_BPGetItemName_Params params;
	params.ItemNameIn = ItemNameIn;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.BPGetItemIcon
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UPrimalItemStructure_SecurityCamera_C::BPGetItemIcon(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.BPGetItemIcon");

	UPrimalItemStructure_SecurityCamera_C_BPGetItemIcon_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.BPGetItemDescription
// (Net, NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString*                 InDescription                  (Parm, ZeroConstructor)
// bool*                          bGetLongDescription            (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItemStructure_SecurityCamera_C::BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.BPGetItemDescription");

	UPrimalItemStructure_SecurityCamera_C_BPGetItemDescription_Params params;
	params.InDescription = InDescription;
	params.bGetLongDescription = bGetLongDescription;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.ExecuteUbergraph_PrimalItemStructure_SecurityCamera
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_SecurityCamera_C::ExecuteUbergraph_PrimalItemStructure_SecurityCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.ExecuteUbergraph_PrimalItemStructure_SecurityCamera");

	UPrimalItemStructure_SecurityCamera_C_ExecuteUbergraph_PrimalItemStructure_SecurityCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
