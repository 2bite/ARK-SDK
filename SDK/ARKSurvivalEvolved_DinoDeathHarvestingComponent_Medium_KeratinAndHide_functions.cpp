// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Medium_KeratinAndHide_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Medium_KeratinAndHide.DinoDeathHarvestingComponent_Medium_KeratinAndHide_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_KeratinAndHide
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Medium_KeratinAndHide_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_KeratinAndHide(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Medium_KeratinAndHide.DinoDeathHarvestingComponent_Medium_KeratinAndHide_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_KeratinAndHide");

	UDinoDeathHarvestingComponent_Medium_KeratinAndHide_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_KeratinAndHide_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
