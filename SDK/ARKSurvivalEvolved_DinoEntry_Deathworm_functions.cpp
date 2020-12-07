// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Deathworm_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Deathworm.DinoEntry_Deathworm_C.ExecuteUbergraph_DinoEntry_Deathworm
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Deathworm_C::ExecuteUbergraph_DinoEntry_Deathworm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Deathworm.DinoEntry_Deathworm_C.ExecuteUbergraph_DinoEntry_Deathworm");

	UDinoEntry_Deathworm_C_ExecuteUbergraph_DinoEntry_Deathworm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
