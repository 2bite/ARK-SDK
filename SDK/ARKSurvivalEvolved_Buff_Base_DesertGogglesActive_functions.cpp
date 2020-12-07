// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Base_DesertGogglesActive_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Base_DesertGogglesActive.Buff_Base_DesertGogglesActive_C.UserConstructionScript
// ()

void ABuff_Base_DesertGogglesActive_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_DesertGogglesActive.Buff_Base_DesertGogglesActive_C.UserConstructionScript");

	ABuff_Base_DesertGogglesActive_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Base_DesertGogglesActive.Buff_Base_DesertGogglesActive_C.ExecuteUbergraph_Buff_Base_DesertGogglesActive
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Base_DesertGogglesActive_C::ExecuteUbergraph_Buff_Base_DesertGogglesActive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_DesertGogglesActive.Buff_Base_DesertGogglesActive_C.ExecuteUbergraph_Buff_Base_DesertGogglesActive");

	ABuff_Base_DesertGogglesActive_C_ExecuteUbergraph_Buff_Base_DesertGogglesActive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
