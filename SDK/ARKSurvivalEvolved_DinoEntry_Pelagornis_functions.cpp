// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Pelagornis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Pelagornis.DinoEntry_Pelagornis_C.ExecuteUbergraph_DinoEntry_Pelagornis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Pelagornis_C::ExecuteUbergraph_DinoEntry_Pelagornis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Pelagornis.DinoEntry_Pelagornis_C.ExecuteUbergraph_DinoEntry_Pelagornis");

	UDinoEntry_Pelagornis_C_ExecuteUbergraph_DinoEntry_Pelagornis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
