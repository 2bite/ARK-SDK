// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Drums_ReadyForWar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Drums_ReadyForWar_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.BPDeactivated");

	ABuff_Drums_ReadyForWar_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.UserConstructionScript
// ()

void ABuff_Drums_ReadyForWar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.UserConstructionScript");

	ABuff_Drums_ReadyForWar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.ExecuteUbergraph_Buff_Drums_ReadyForWar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Drums_ReadyForWar_C::ExecuteUbergraph_Buff_Drums_ReadyForWar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.ExecuteUbergraph_Buff_Drums_ReadyForWar");

	ABuff_Drums_ReadyForWar_C_ExecuteUbergraph_Buff_Drums_ReadyForWar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
