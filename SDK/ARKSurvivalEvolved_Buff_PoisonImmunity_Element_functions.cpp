// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PoisonImmunity_Element_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PoisonImmunity_Element.Buff_PoisonImmunity_Element_C.UserConstructionScript
// ()

void ABuff_PoisonImmunity_Element_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonImmunity_Element.Buff_PoisonImmunity_Element_C.UserConstructionScript");

	ABuff_PoisonImmunity_Element_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PoisonImmunity_Element.Buff_PoisonImmunity_Element_C.ExecuteUbergraph_Buff_PoisonImmunity_Element
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PoisonImmunity_Element_C::ExecuteUbergraph_Buff_PoisonImmunity_Element(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonImmunity_Element.Buff_PoisonImmunity_Element_C.ExecuteUbergraph_Buff_PoisonImmunity_Element");

	ABuff_PoisonImmunity_Element_C_ExecuteUbergraph_Buff_PoisonImmunity_Element_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
