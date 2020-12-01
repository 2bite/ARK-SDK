// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_MegaMek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_MegaMek.DinoEntry_MegaMek_C.ExecuteUbergraph_DinoEntry_MegaMek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_MegaMek_C::ExecuteUbergraph_DinoEntry_MegaMek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_MegaMek.DinoEntry_MegaMek_C.ExecuteUbergraph_DinoEntry_MegaMek");

	UDinoEntry_MegaMek_C_ExecuteUbergraph_DinoEntry_MegaMek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
