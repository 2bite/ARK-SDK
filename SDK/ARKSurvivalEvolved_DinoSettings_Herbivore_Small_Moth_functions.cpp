// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Herbivore_Small_Moth_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Herbivore_Small_Moth.DinoSettings_Herbivore_Small_Moth_C.ExecuteUbergraph_DinoSettings_Herbivore_Small_Moth
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Herbivore_Small_Moth_C::ExecuteUbergraph_DinoSettings_Herbivore_Small_Moth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Herbivore_Small_Moth.DinoSettings_Herbivore_Small_Moth_C.ExecuteUbergraph_DinoSettings_Herbivore_Small_Moth");

	UDinoSettings_Herbivore_Small_Moth_C_ExecuteUbergraph_DinoSettings_Herbivore_Small_Moth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
