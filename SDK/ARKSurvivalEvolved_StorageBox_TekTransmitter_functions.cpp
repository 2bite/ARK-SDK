// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_TekTransmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StorageBox_TekTransmitter.StorageBox_TekTransmitter_C.BPCanBeActivatedByPlayer
// ()
// Parameters:
// class AShooterPlayerController** PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStorageBox_TekTransmitter_C::BPCanBeActivatedByPlayer(class AShooterPlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekTransmitter.StorageBox_TekTransmitter_C.BPCanBeActivatedByPlayer");

	AStorageBox_TekTransmitter_C_BPCanBeActivatedByPlayer_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorageBox_TekTransmitter.StorageBox_TekTransmitter_C.UserConstructionScript
// ()

void AStorageBox_TekTransmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekTransmitter.StorageBox_TekTransmitter_C.UserConstructionScript");

	AStorageBox_TekTransmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekTransmitter.StorageBox_TekTransmitter_C.ExecuteUbergraph_StorageBox_TekTransmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_TekTransmitter_C::ExecuteUbergraph_StorageBox_TekTransmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekTransmitter.StorageBox_TekTransmitter_C.ExecuteUbergraph_StorageBox_TekTransmitter");

	AStorageBox_TekTransmitter_C_ExecuteUbergraph_StorageBox_TekTransmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
