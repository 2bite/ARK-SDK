// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_RockGolem_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_RockGolem.DinoEntry_RockGolem_C.ExecuteUbergraph_DinoEntry_RockGolem
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_RockGolem_C::ExecuteUbergraph_DinoEntry_RockGolem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_RockGolem.DinoEntry_RockGolem_C.ExecuteUbergraph_DinoEntry_RockGolem");

	UDinoEntry_RockGolem_C_ExecuteUbergraph_DinoEntry_RockGolem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
