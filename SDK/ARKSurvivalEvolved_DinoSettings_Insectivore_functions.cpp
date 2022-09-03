// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Insectivore_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Insectivore.DinoSettings_Insectivore_C.ExecuteUbergraph_DinoSettings_Insectivore
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Insectivore_C::ExecuteUbergraph_DinoSettings_Insectivore(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Insectivore.DinoSettings_Insectivore_C.ExecuteUbergraph_DinoSettings_Insectivore");

	UDinoSettings_Insectivore_C_ExecuteUbergraph_DinoSettings_Insectivore_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
