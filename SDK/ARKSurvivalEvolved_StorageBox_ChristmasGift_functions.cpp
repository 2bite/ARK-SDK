// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_ChristmasGift_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StorageBox_ChristmasGift.StorageBox_ChristmasGift_C.BPOverrideDemolish
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStorageBox_ChristmasGift_C::BPOverrideDemolish(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_ChristmasGift.StorageBox_ChristmasGift_C.BPOverrideDemolish");

	AStorageBox_ChristmasGift_C_BPOverrideDemolish_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorageBox_ChristmasGift.StorageBox_ChristmasGift_C.BPOverrideAllowStructureAccess
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsAccessAllowed               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStorageBox_ChristmasGift_C::BPOverrideAllowStructureAccess(class AShooterPlayerController** ForPC, bool* bIsAccessAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_ChristmasGift.StorageBox_ChristmasGift_C.BPOverrideAllowStructureAccess");

	AStorageBox_ChristmasGift_C_BPOverrideAllowStructureAccess_Params params;
	params.ForPC = ForPC;
	params.bIsAccessAllowed = bIsAccessAllowed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorageBox_ChristmasGift.StorageBox_ChristmasGift_C.UserConstructionScript
// ()

void AStorageBox_ChristmasGift_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_ChristmasGift.StorageBox_ChristmasGift_C.UserConstructionScript");

	AStorageBox_ChristmasGift_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_ChristmasGift.StorageBox_ChristmasGift_C.ReceiveBeginPlay
// ()

void AStorageBox_ChristmasGift_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_ChristmasGift.StorageBox_ChristmasGift_C.ReceiveBeginPlay");

	AStorageBox_ChristmasGift_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_ChristmasGift.StorageBox_ChristmasGift_C.ExecuteUbergraph_StorageBox_ChristmasGift
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_ChristmasGift_C::ExecuteUbergraph_StorageBox_ChristmasGift(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_ChristmasGift.StorageBox_ChristmasGift_C.ExecuteUbergraph_StorageBox_ChristmasGift");

	AStorageBox_ChristmasGift_C_ExecuteUbergraph_StorageBox_ChristmasGift_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
