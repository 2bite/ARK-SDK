// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjMud_Chalico_Corrupted_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjMud_Chalico_Corrupted.ProjMud_Chalico_Corrupted_C.UserConstructionScript
// ()

void AProjMud_Chalico_Corrupted_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMud_Chalico_Corrupted.ProjMud_Chalico_Corrupted_C.UserConstructionScript");

	AProjMud_Chalico_Corrupted_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjMud_Chalico_Corrupted.ProjMud_Chalico_Corrupted_C.ExecuteUbergraph_ProjMud_Chalico_Corrupted
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjMud_Chalico_Corrupted_C::ExecuteUbergraph_ProjMud_Chalico_Corrupted(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMud_Chalico_Corrupted.ProjMud_Chalico_Corrupted_C.ExecuteUbergraph_ProjMud_Chalico_Corrupted");

	AProjMud_Chalico_Corrupted_C_ExecuteUbergraph_ProjMud_Chalico_Corrupted_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
