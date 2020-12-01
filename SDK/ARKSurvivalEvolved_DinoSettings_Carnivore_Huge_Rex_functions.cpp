// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Carnivore_Huge_Rex_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Carnivore_Huge_Rex.DinoSettings_Carnivore_Huge_Rex_C.ExecuteUbergraph_DinoSettings_Carnivore_Huge_Rex
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Carnivore_Huge_Rex_C::ExecuteUbergraph_DinoSettings_Carnivore_Huge_Rex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Huge_Rex.DinoSettings_Carnivore_Huge_Rex_C.ExecuteUbergraph_DinoSettings_Carnivore_Huge_Rex");

	UDinoSettings_Carnivore_Huge_Rex_C_ExecuteUbergraph_DinoSettings_Carnivore_Huge_Rex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
