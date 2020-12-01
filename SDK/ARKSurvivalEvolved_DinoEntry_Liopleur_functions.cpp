// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Liopleur_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Liopleur.DinoEntry_Liopleur_C.ExecuteUbergraph_DinoEntry_Liopleur
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Liopleur_C::ExecuteUbergraph_DinoEntry_Liopleur(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Liopleur.DinoEntry_Liopleur_C.ExecuteUbergraph_DinoEntry_Liopleur");

	UDinoEntry_Liopleur_C_ExecuteUbergraph_DinoEntry_Liopleur_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
