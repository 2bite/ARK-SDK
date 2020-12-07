// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_KingKaiju_Alpha_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_KingKaiju_Alpha.DinoEntry_KingKaiju_Alpha_C.ExecuteUbergraph_DinoEntry_KingKaiju_Alpha
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_KingKaiju_Alpha_C::ExecuteUbergraph_DinoEntry_KingKaiju_Alpha(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_KingKaiju_Alpha.DinoEntry_KingKaiju_Alpha_C.ExecuteUbergraph_DinoEntry_KingKaiju_Alpha");

	UDinoEntry_KingKaiju_Alpha_C_ExecuteUbergraph_DinoEntry_KingKaiju_Alpha_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
