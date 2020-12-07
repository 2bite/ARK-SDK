// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Herbivore_Tiny_Lystro_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Herbivore_Tiny_Lystro.DinoSettings_Herbivore_Tiny_Lystro_C.ExecuteUbergraph_DinoSettings_Herbivore_Tiny_Lystro
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Herbivore_Tiny_Lystro_C::ExecuteUbergraph_DinoSettings_Herbivore_Tiny_Lystro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Herbivore_Tiny_Lystro.DinoSettings_Herbivore_Tiny_Lystro_C.ExecuteUbergraph_DinoSettings_Herbivore_Tiny_Lystro");

	UDinoSettings_Herbivore_Tiny_Lystro_C_ExecuteUbergraph_DinoSettings_Herbivore_Tiny_Lystro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
