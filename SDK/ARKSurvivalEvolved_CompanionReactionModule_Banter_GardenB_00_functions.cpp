// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CompanionReactionModule_Banter_GardenB_00_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CompanionReactionModule_Banter_GardenB_00.CompanionReactionModule_Banter_GardenB_00_C.ExecuteUbergraph_CompanionReactionModule_Banter_GardenB_00
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCompanionReactionModule_Banter_GardenB_00_C::ExecuteUbergraph_CompanionReactionModule_Banter_GardenB_00(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompanionReactionModule_Banter_GardenB_00.CompanionReactionModule_Banter_GardenB_00_C.ExecuteUbergraph_CompanionReactionModule_Banter_GardenB_00");

	UCompanionReactionModule_Banter_GardenB_00_C_ExecuteUbergraph_CompanionReactionModule_Banter_GardenB_00_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
