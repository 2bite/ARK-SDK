// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TransGPSCharge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TransGPSCharge.TransGPSCharge_C.BPPostLoadedFromSaveGame
// ()

void ATransGPSCharge_C::BPPostLoadedFromSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function TransGPSCharge.TransGPSCharge_C.BPPostLoadedFromSaveGame");

	ATransGPSCharge_C_BPPostLoadedFromSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TransGPSCharge.TransGPSCharge_C.BPPlacedStructure
// (NetReliable, Exec, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, DLLImport, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void ATransGPSCharge_C::BPPlacedStructure(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function TransGPSCharge.TransGPSCharge_C.BPPlacedStructure");

	ATransGPSCharge_C_BPPlacedStructure_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TransGPSCharge.TransGPSCharge_C.UserConstructionScript
// ()

void ATransGPSCharge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TransGPSCharge.TransGPSCharge_C.UserConstructionScript");

	ATransGPSCharge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TransGPSCharge.TransGPSCharge_C.ExecuteUbergraph_TransGPSCharge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATransGPSCharge_C::ExecuteUbergraph_TransGPSCharge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TransGPSCharge.TransGPSCharge_C.ExecuteUbergraph_TransGPSCharge");

	ATransGPSCharge_C_ExecuteUbergraph_TransGPSCharge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
