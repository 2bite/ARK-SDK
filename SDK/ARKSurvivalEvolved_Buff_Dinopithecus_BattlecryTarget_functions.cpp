// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Dinopithecus_BattlecryTarget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Dinopithecus_BattlecryTarget.Buff_Dinopithecus_BattlecryTarget_C.BPSetupForInstigator
// (NetReliable, Exec, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Dinopithecus_BattlecryTarget_C::STATIC_BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Dinopithecus_BattlecryTarget.Buff_Dinopithecus_BattlecryTarget_C.BPSetupForInstigator");

	ABuff_Dinopithecus_BattlecryTarget_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Dinopithecus_BattlecryTarget.Buff_Dinopithecus_BattlecryTarget_C.ReceiveBeginPlay
// ()

void ABuff_Dinopithecus_BattlecryTarget_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Dinopithecus_BattlecryTarget.Buff_Dinopithecus_BattlecryTarget_C.ReceiveBeginPlay");

	ABuff_Dinopithecus_BattlecryTarget_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Dinopithecus_BattlecryTarget.Buff_Dinopithecus_BattlecryTarget_C.UserConstructionScript
// ()

void ABuff_Dinopithecus_BattlecryTarget_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Dinopithecus_BattlecryTarget.Buff_Dinopithecus_BattlecryTarget_C.UserConstructionScript");

	ABuff_Dinopithecus_BattlecryTarget_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Dinopithecus_BattlecryTarget.Buff_Dinopithecus_BattlecryTarget_C.ExecuteUbergraph_Buff_Dinopithecus_BattlecryTarget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Dinopithecus_BattlecryTarget_C::ExecuteUbergraph_Buff_Dinopithecus_BattlecryTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Dinopithecus_BattlecryTarget.Buff_Dinopithecus_BattlecryTarget_C.ExecuteUbergraph_Buff_Dinopithecus_BattlecryTarget");

	ABuff_Dinopithecus_BattlecryTarget_C_ExecuteUbergraph_Buff_Dinopithecus_BattlecryTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
