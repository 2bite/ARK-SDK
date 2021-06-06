// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Kaiju_Ice_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Kaiju_Ice.DinoDeathHarvestingComponent_Kaiju_Ice_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Kaiju_Ice
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Kaiju_Ice_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Kaiju_Ice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Kaiju_Ice.DinoDeathHarvestingComponent_Kaiju_Ice_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Kaiju_Ice");

	UDinoDeathHarvestingComponent_Kaiju_Ice_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Kaiju_Ice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
