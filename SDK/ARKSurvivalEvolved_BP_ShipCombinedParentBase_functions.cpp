// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_ShipCombinedParentBase_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShipCombinedParentBase.BP_ShipCombinedParentBase_C.UserConstructionScript
// ()

void ABP_ShipCombinedParentBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipCombinedParentBase.BP_ShipCombinedParentBase_C.UserConstructionScript");

	ABP_ShipCombinedParentBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipCombinedParentBase.BP_ShipCombinedParentBase_C.ExecuteUbergraph_BP_ShipCombinedParentBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShipCombinedParentBase_C::ExecuteUbergraph_BP_ShipCombinedParentBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipCombinedParentBase.BP_ShipCombinedParentBase_C.ExecuteUbergraph_BP_ShipCombinedParentBase");

	ABP_ShipCombinedParentBase_C_ExecuteUbergraph_BP_ShipCombinedParentBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
