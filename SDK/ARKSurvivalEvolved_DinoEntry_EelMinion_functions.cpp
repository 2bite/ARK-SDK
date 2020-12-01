// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_EelMinion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_EelMinion.DinoEntry_EelMinion_C.ExecuteUbergraph_DinoEntry_EelMinion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_EelMinion_C::ExecuteUbergraph_DinoEntry_EelMinion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_EelMinion.DinoEntry_EelMinion_C.ExecuteUbergraph_DinoEntry_EelMinion");

	UDinoEntry_EelMinion_C_ExecuteUbergraph_DinoEntry_EelMinion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
