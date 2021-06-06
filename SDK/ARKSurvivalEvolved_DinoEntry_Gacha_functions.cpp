// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Gacha_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Gacha.DinoEntry_Gacha_C.ExecuteUbergraph_DinoEntry_Gacha
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Gacha_C::ExecuteUbergraph_DinoEntry_Gacha(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Gacha.DinoEntry_Gacha_C.ExecuteUbergraph_DinoEntry_Gacha");

	UDinoEntry_Gacha_C_ExecuteUbergraph_DinoEntry_Gacha_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
