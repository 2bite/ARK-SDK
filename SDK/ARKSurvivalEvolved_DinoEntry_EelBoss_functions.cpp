// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_EelBoss_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_EelBoss.DinoEntry_EelBoss_C.ExecuteUbergraph_DinoEntry_EelBoss
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_EelBoss_C::ExecuteUbergraph_DinoEntry_EelBoss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_EelBoss.DinoEntry_EelBoss_C.ExecuteUbergraph_DinoEntry_EelBoss");

	UDinoEntry_EelBoss_C_ExecuteUbergraph_DinoEntry_EelBoss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
