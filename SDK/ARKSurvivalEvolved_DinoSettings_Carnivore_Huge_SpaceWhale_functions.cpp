// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Carnivore_Huge_SpaceWhale_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Carnivore_Huge_SpaceWhale.DinoSettings_Carnivore_Huge_SpaceWhale_C.ExecuteUbergraph_DinoSettings_Carnivore_Huge_SpaceWhale
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Carnivore_Huge_SpaceWhale_C::ExecuteUbergraph_DinoSettings_Carnivore_Huge_SpaceWhale(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Huge_SpaceWhale.DinoSettings_Carnivore_Huge_SpaceWhale_C.ExecuteUbergraph_DinoSettings_Carnivore_Huge_SpaceWhale");

	UDinoSettings_Carnivore_Huge_SpaceWhale_C_ExecuteUbergraph_DinoSettings_Carnivore_Huge_SpaceWhale_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
