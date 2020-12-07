// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_RockGolem_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_RockGolem.DinoSettings_RockGolem_C.ExecuteUbergraph_DinoSettings_RockGolem
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_RockGolem_C::ExecuteUbergraph_DinoSettings_RockGolem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_RockGolem.DinoSettings_RockGolem_C.ExecuteUbergraph_DinoSettings_RockGolem");

	UDinoSettings_RockGolem_C_ExecuteUbergraph_DinoSettings_RockGolem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
