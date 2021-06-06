// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Gasbags_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Gasbags.DinoEntry_Gasbags_C.ExecuteUbergraph_DinoEntry_Gasbags
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Gasbags_C::ExecuteUbergraph_DinoEntry_Gasbags(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Gasbags.DinoEntry_Gasbags_C.ExecuteUbergraph_DinoEntry_Gasbags");

	UDinoEntry_Gasbags_C_ExecuteUbergraph_DinoEntry_Gasbags_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
