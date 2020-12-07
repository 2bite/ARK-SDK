// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Herbivore_Tiny_Achatina_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Herbivore_Tiny_Achatina.DinoSettings_Herbivore_Tiny_Achatina_C.ExecuteUbergraph_DinoSettings_Herbivore_Tiny_Achatina
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Herbivore_Tiny_Achatina_C::ExecuteUbergraph_DinoSettings_Herbivore_Tiny_Achatina(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Herbivore_Tiny_Achatina.DinoSettings_Herbivore_Tiny_Achatina_C.ExecuteUbergraph_DinoSettings_Herbivore_Tiny_Achatina");

	UDinoSettings_Herbivore_Tiny_Achatina_C_ExecuteUbergraph_DinoSettings_Herbivore_Tiny_Achatina_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
