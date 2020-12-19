// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Kaiju_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Kaiju.DinoDeathHarvestingComponent_Kaiju_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Kaiju
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Kaiju_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Kaiju(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Kaiju.DinoDeathHarvestingComponent_Kaiju_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Kaiju");

	UDinoDeathHarvestingComponent_Kaiju_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Kaiju_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
