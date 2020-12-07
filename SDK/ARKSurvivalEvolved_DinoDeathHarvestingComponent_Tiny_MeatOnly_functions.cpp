// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Tiny_MeatOnly_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Tiny_MeatOnly.DinoDeathHarvestingComponent_Tiny_MeatOnly_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_MeatOnly
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Tiny_MeatOnly_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_MeatOnly(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Tiny_MeatOnly.DinoDeathHarvestingComponent_Tiny_MeatOnly_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_MeatOnly");

	UDinoDeathHarvestingComponent_Tiny_MeatOnly_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_MeatOnly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
