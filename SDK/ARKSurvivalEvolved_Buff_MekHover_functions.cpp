// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MekHover_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MekHover.Buff_MekHover_C.UserConstructionScript
// ()

void ABuff_MekHover_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekHover.Buff_MekHover_C.UserConstructionScript");

	ABuff_MekHover_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekHover.Buff_MekHover_C.ExecuteUbergraph_Buff_MekHover
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekHover_C::ExecuteUbergraph_Buff_MekHover(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekHover.Buff_MekHover_C.ExecuteUbergraph_Buff_MekHover");

	ABuff_MekHover_C_ExecuteUbergraph_Buff_MekHover_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
