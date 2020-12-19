// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Medium_MeatOnly_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Medium_MeatOnly.DinoDeathHarvestingComponent_Medium_MeatOnly_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_MeatOnly
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Medium_MeatOnly_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_MeatOnly(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Medium_MeatOnly.DinoDeathHarvestingComponent_Medium_MeatOnly_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_MeatOnly");

	UDinoDeathHarvestingComponent_Medium_MeatOnly_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_MeatOnly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
