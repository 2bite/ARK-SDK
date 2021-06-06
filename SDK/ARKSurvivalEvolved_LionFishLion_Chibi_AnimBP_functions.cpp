// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LionFishLion_Chibi_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LionFishLion_Chibi_AnimBP.LionFishLion_Chibi_AnimBP_C.ExecuteUbergraph_LionFishLion_Chibi_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULionFishLion_Chibi_AnimBP_C::ExecuteUbergraph_LionFishLion_Chibi_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionFishLion_Chibi_AnimBP.LionFishLion_Chibi_AnimBP_C.ExecuteUbergraph_LionFishLion_Chibi_AnimBP");

	ULionFishLion_Chibi_AnimBP_C_ExecuteUbergraph_LionFishLion_Chibi_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
