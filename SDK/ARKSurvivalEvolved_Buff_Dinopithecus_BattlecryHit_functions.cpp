// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Dinopithecus_BattlecryHit_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Dinopithecus_BattlecryHit.Buff_Dinopithecus_BattlecryHit_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Dinopithecus_BattlecryHit_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Dinopithecus_BattlecryHit.Buff_Dinopithecus_BattlecryHit_C.BPActivated");

	ABuff_Dinopithecus_BattlecryHit_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Dinopithecus_BattlecryHit.Buff_Dinopithecus_BattlecryHit_C.UserConstructionScript
// ()

void ABuff_Dinopithecus_BattlecryHit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Dinopithecus_BattlecryHit.Buff_Dinopithecus_BattlecryHit_C.UserConstructionScript");

	ABuff_Dinopithecus_BattlecryHit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Dinopithecus_BattlecryHit.Buff_Dinopithecus_BattlecryHit_C.ExecuteUbergraph_Buff_Dinopithecus_BattlecryHit
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Dinopithecus_BattlecryHit_C::ExecuteUbergraph_Buff_Dinopithecus_BattlecryHit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Dinopithecus_BattlecryHit.Buff_Dinopithecus_BattlecryHit_C.ExecuteUbergraph_Buff_Dinopithecus_BattlecryHit");

	ABuff_Dinopithecus_BattlecryHit_C_ExecuteUbergraph_Buff_Dinopithecus_BattlecryHit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
