// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Birthday_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Birthday.DinoDeathHarvestingComponent_Birthday_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Birthday
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Birthday_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Birthday(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Birthday.DinoDeathHarvestingComponent_Birthday_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Birthday");

	UDinoDeathHarvestingComponent_Birthday_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Birthday_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
