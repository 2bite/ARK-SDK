// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_LionFishLion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_LionFishLion.DinoEntry_LionFishLion_C.ExecuteUbergraph_DinoEntry_LionFishLion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_LionFishLion_C::ExecuteUbergraph_DinoEntry_LionFishLion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_LionFishLion.DinoEntry_LionFishLion_C.ExecuteUbergraph_DinoEntry_LionFishLion");

	UDinoEntry_LionFishLion_C_ExecuteUbergraph_DinoEntry_LionFishLion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
