// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Herbivore_Huge_Diplo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Herbivore_Huge_Diplo.DinoSettings_Herbivore_Huge_Diplo_C.ExecuteUbergraph_DinoSettings_Herbivore_Huge_Diplo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Herbivore_Huge_Diplo_C::ExecuteUbergraph_DinoSettings_Herbivore_Huge_Diplo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Herbivore_Huge_Diplo.DinoSettings_Herbivore_Huge_Diplo_C.ExecuteUbergraph_DinoSettings_Herbivore_Huge_Diplo");

	UDinoSettings_Herbivore_Huge_Diplo_C_ExecuteUbergraph_DinoSettings_Herbivore_Huge_Diplo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
