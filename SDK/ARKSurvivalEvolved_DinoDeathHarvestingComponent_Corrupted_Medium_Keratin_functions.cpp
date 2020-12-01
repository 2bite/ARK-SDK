// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Corrupted_Medium_Keratin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Corrupted_Medium_Keratin.DinoDeathHarvestingComponent_Corrupted_Medium_Keratin_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Corrupted_Medium_Keratin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Corrupted_Medium_Keratin_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Corrupted_Medium_Keratin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Corrupted_Medium_Keratin.DinoDeathHarvestingComponent_Corrupted_Medium_Keratin_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Corrupted_Medium_Keratin");

	UDinoDeathHarvestingComponent_Corrupted_Medium_Keratin_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Corrupted_Medium_Keratin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
