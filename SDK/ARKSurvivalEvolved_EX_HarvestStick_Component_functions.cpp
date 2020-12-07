// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_HarvestStick_Component_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EX_HarvestStick_Component.EX_HarvestStick_Component_C.ExecuteUbergraph_EX_HarvestStick_Component
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEX_HarvestStick_Component_C::ExecuteUbergraph_EX_HarvestStick_Component(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_HarvestStick_Component.EX_HarvestStick_Component_C.ExecuteUbergraph_EX_HarvestStick_Component");

	UEX_HarvestStick_Component_C_ExecuteUbergraph_EX_HarvestStick_Component_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
