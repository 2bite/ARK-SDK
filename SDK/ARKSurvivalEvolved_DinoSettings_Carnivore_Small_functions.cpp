// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Carnivore_Small_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Carnivore_Small.DinoSettings_Carnivore_Small_C.ExecuteUbergraph_DinoSettings_Carnivore_Small
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Carnivore_Small_C::ExecuteUbergraph_DinoSettings_Carnivore_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Small.DinoSettings_Carnivore_Small_C.ExecuteUbergraph_DinoSettings_Carnivore_Small");

	UDinoSettings_Carnivore_Small_C_ExecuteUbergraph_DinoSettings_Carnivore_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
