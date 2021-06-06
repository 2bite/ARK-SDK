// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SiliconHarvestComponent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SiliconHarvestComponent.SiliconHarvestComponent_C.ExecuteUbergraph_SiliconHarvestComponent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USiliconHarvestComponent_C::ExecuteUbergraph_SiliconHarvestComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SiliconHarvestComponent.SiliconHarvestComponent_C.ExecuteUbergraph_SiliconHarvestComponent");

	USiliconHarvestComponent_C_ExecuteUbergraph_SiliconHarvestComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
