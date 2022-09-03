// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Insectivore_Tiny_Archa_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Insectivore_Tiny_Archa.DinoSettings_Insectivore_Tiny_Archa_C.ExecuteUbergraph_DinoSettings_Insectivore_Tiny_Archa
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Insectivore_Tiny_Archa_C::ExecuteUbergraph_DinoSettings_Insectivore_Tiny_Archa(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Insectivore_Tiny_Archa.DinoSettings_Insectivore_Tiny_Archa_C.ExecuteUbergraph_DinoSettings_Insectivore_Tiny_Archa");

	UDinoSettings_Insectivore_Tiny_Archa_C_ExecuteUbergraph_DinoSettings_Insectivore_Tiny_Archa_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
