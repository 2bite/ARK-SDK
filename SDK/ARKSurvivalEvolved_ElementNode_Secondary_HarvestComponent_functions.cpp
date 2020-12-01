// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElementNode_Secondary_HarvestComponent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElementNode_Secondary_HarvestComponent.ElementNode_Secondary_HarvestComponent_C.ExecuteUbergraph_ElementNode_Secondary_HarvestComponent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UElementNode_Secondary_HarvestComponent_C::ExecuteUbergraph_ElementNode_Secondary_HarvestComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Secondary_HarvestComponent.ElementNode_Secondary_HarvestComponent_C.ExecuteUbergraph_ElementNode_Secondary_HarvestComponent");

	UElementNode_Secondary_HarvestComponent_C_ExecuteUbergraph_ElementNode_Secondary_HarvestComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
