// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjMud_Chalico_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjMud_Chalico.ProjMud_Chalico_C.UserConstructionScript
// ()

void AProjMud_Chalico_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMud_Chalico.ProjMud_Chalico_C.UserConstructionScript");

	AProjMud_Chalico_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjMud_Chalico.ProjMud_Chalico_C.ExecuteUbergraph_ProjMud_Chalico
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjMud_Chalico_C::ExecuteUbergraph_ProjMud_Chalico(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMud_Chalico.ProjMud_Chalico_C.ExecuteUbergraph_ProjMud_Chalico");

	AProjMud_Chalico_C_ExecuteUbergraph_ProjMud_Chalico_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
