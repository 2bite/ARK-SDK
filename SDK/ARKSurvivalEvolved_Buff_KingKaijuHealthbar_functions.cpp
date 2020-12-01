// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_KingKaijuHealthbar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_KingKaijuHealthbar.Buff_KingKaijuHealthbar_C.BPGetHUDElements
// (Net, Exec, Native, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_KingKaijuHealthbar_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_KingKaijuHealthbar.Buff_KingKaijuHealthbar_C.BPGetHUDElements");

	ABuff_KingKaijuHealthbar_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_KingKaijuHealthbar.Buff_KingKaijuHealthbar_C.UserConstructionScript
// ()

void ABuff_KingKaijuHealthbar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_KingKaijuHealthbar.Buff_KingKaijuHealthbar_C.UserConstructionScript");

	ABuff_KingKaijuHealthbar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_KingKaijuHealthbar.Buff_KingKaijuHealthbar_C.Server_Deactivate
// ()

void ABuff_KingKaijuHealthbar_C::Server_Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_KingKaijuHealthbar.Buff_KingKaijuHealthbar_C.Server_Deactivate");

	ABuff_KingKaijuHealthbar_C_Server_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_KingKaijuHealthbar.Buff_KingKaijuHealthbar_C.ExecuteUbergraph_Buff_KingKaijuHealthbar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_KingKaijuHealthbar_C::ExecuteUbergraph_Buff_KingKaijuHealthbar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_KingKaijuHealthbar.Buff_KingKaijuHealthbar_C.ExecuteUbergraph_Buff_KingKaijuHealthbar");

	ABuff_KingKaijuHealthbar_C_ExecuteUbergraph_Buff_KingKaijuHealthbar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
