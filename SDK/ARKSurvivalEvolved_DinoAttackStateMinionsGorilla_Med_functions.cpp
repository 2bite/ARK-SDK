// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMinionsGorilla_Med_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateMinionsGorilla_Med.DinoAttackStateMinionsGorilla_Med_C.ExecuteUbergraph_DinoAttackStateMinionsGorilla_Med
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMinionsGorilla_Med_C::ExecuteUbergraph_DinoAttackStateMinionsGorilla_Med(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMinionsGorilla_Med.DinoAttackStateMinionsGorilla_Med_C.ExecuteUbergraph_DinoAttackStateMinionsGorilla_Med");

	UDinoAttackStateMinionsGorilla_Med_C_ExecuteUbergraph_DinoAttackStateMinionsGorilla_Med_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
