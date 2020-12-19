// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Archa_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Archa.DinoEntry_Archa_C.ExecuteUbergraph_DinoEntry_Archa
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Archa_C::ExecuteUbergraph_DinoEntry_Archa(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Archa.DinoEntry_Archa_C.ExecuteUbergraph_DinoEntry_Archa");

	UDinoEntry_Archa_C_ExecuteUbergraph_DinoEntry_Archa_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
