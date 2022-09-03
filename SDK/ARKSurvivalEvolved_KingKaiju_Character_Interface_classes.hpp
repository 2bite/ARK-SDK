#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_KingKaiju_Character_Interface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass KingKaiju_Character_Interface.KingKaiju_Character_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UKingKaiju_Character_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass KingKaiju_Character_Interface.KingKaiju_Character_Interface_C");
		return ptr;
	}


	void GetVar_DifficultyIndex(int* Return);
	void GetVar_InHordeMode(bool* Return);
	void GetKingKaijuCharStatusComponent(class UPrimalCharacterStatusComponent** Component);
	void SetVar_PlayersLostHordeMode(bool Value);
	void SetVar_FinishCurrentHordeMode(bool Value);
	void SetVar_KKArenaManager(class AActor* ArenaManager);
	void GetKaijuEnemyList(TArray<class APrimalCharacter*>* EnemyList);
	void GetClosestEnemy(class AActor** Enemy);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
